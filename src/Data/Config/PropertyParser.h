#pragma once

#include "Property.h"
#include "Rule.h"

#include <json/json.h>

namespace Data
{
	class PropertyParser
	{
	public:
		PropertyParser(const std::string& a_name) : _name{ a_name } {}

		void Parse(const Json::Value& a_spec, IPropertyContainer* a_properties) const;

		virtual void ParseString(const Json::String& a_value, IPropertyContainer* a_properties)
			const;

		virtual void ParseNumber(double a_value, IPropertyContainer* a_properties) const;

	protected:
		std::string _name;
	};

	class FormTypeParser final : public PropertyParser
	{
	public:
		using PropertyParser::PropertyParser;

		void ParseString(const Json::String& a_value, IPropertyContainer* a_properties)
			const override;
	};

	class FormIDParser final : public PropertyParser
	{
	public:
		using PropertyParser::PropertyParser;

		void ParseString(const Json::String& a_value, IPropertyContainer* a_properties)
			const override;

	private:
		static RE::FormID ParseFormID(const std::string& a_identifier);
	};

	class PartsParser final : public PropertyParser
	{
	public:
		using PropertyParser::PropertyParser;

		void ParseNumber(double a_value, IPropertyContainer* a_properties) const override;
	};

	class MainPartParser final : public PropertyParser
	{
	public:
		using PropertyParser::PropertyParser;

		void ParseNumber(double a_value, IPropertyContainer* a_properties) const override;
	};

	template <typename T>
	class EnumParser final : public PropertyParser
	{
	public:
		using Map = util::enum_dict<T>;

		EnumParser(const std::string& a_name, Map const& a_map)
			: PropertyParser(a_name),
			  _map{ a_map }
		{
		}

		void ParseString(const Json::String& a_value, IPropertyContainer* a_properties)
			const override
		{
			std::underlying_type_t<T> underlying{};
			if (util::try_get(_map, a_value, underlying)) {
				a_properties->AddProperty(_name, std::make_shared<MatchProperty>(underlying));
				return;
			}

			PropertyParser::ParseString(a_value, a_properties);
		}

	private:
		Map _map;
	};

	template <typename T>
	class BitfieldParser final : public PropertyParser
	{
	public:
		using Map = util::enum_dict<T>;

		BitfieldParser(const std::string& a_name, Map const& a_map)
			: PropertyParser(a_name),
			  _map{ a_map }
		{
		}

		void ParseString(const Json::String& a_value, IPropertyContainer* a_properties)
			const override
		{
			std::uint32_t flag = 0;
			if (util::try_get(_map, a_value, flag)) {
				a_properties->AddProperty(_name, std::make_shared<BitfieldProperty>(flag));
				return;
			}

			PropertyParser::ParseString(a_value, a_properties);
		}

	private:
		Map _map;
	};
}
