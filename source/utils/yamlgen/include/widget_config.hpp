#ifndef WIDGET_CONFIG_HPP
#define WIDGET_CONFIG_HPP

#include <string>
#include <map>

#include "property_config.hpp"
#include "logging.hpp"


namespace YAMLGen { 
namespace OBLDC { 

class WidgetConfig : PropertyConfig
{

public:

	WidgetConfig() { 
	} 

	inline void log(void) const { 
		LOG_INFO_PRINT("|- Widget");
		PropertyConfig::log(); 
	}

};

} /* namespace OBLDC */
} /* namespace YAMLGen */

#endif
