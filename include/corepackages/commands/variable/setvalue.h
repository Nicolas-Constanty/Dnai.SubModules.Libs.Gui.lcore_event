/*
** Automatically generated by CorePackageGenerator
*/

#ifndef COREPACKAGES_COMMANDS_VARIABLE_SETVALUE_H
#define COREPACKAGES_COMMANDS_VARIABLE_SETVALUE_H

#include <string>
#include <QString>

#include "dnai/corepackages/commands/icommanddata.h"
#include "Cerealizable/Tuple.hpp"
#include "dnai/enums/core/core.h"

using namespace Cerealization::Cerealizable;

namespace dnai
{
    using namespace enums::core;

    namespace corepackages
    {
        namespace variable
        {
            class SetValue : public ICommandData, public Tuple<EntityID, QString>
            {
            public:
                SetValue(EntityID p_variable, QString p_value) :
                    Tuple<EntityID, QString>(variable, value),
                    variable(p_variable), value(p_value)
                {

                }

                ~SetValue() = default;

            public:
                static std::string EVENT()
                {
                    return "VARIABLE.SET_VALUE";
                }

            public:
                EntityID variable; QString value;
            };
        }
    }
}

#endif // COREPACKAGES_COMMANDS_VARIABLE_SETVALUE_H
