import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.const import CONF_ID

esp-powermeter_ns = cg.esphome_ns.namespace("esp-powermeter")
EspPowermeterComponent = esp-powermeter_ns.class_("EspPowermeterComponent", cg.Component)

CONFIG_SCHEMA = cv.Schema(
    {
        cv.GenerateID(): cv.declare_id(EspPowermeterComponent),
    }
).extend(cv.COMPONENT_SCHEMA)


async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)
