import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.const import CONF_ID

AUTO_LOAD = ["binary_sensor", "sensor", "text_sensor"]

DEPENDENCIES = ["uart"]


esp-powermeter_ns = cg.esphome_ns.namespace("esp-powermeter")
EspPowermeterComponent = powermeter_ns.class_("EspPowermeterComponent", uart.UARTDevice, cg.Component)

CONFIG_SCHEMA = cv.Schema(
    {
        cv.GenerateID(): cv.declare_id(EspPowermeterComponent),
    }
).extend(cv.COMPONENT_SCHEMA)


async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)
