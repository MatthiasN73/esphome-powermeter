import esphome.codegen as cg
from esphome.components import uart
import esphome.config_validation as cv
from esphome.const import CONF_ID, CONF_THROTTLE

AUTO_LOAD = ["binary_sensor", "sensor", "text_sensor"]

DEPENDENCIES = ["uart"]

CODEOWNERS = ["@MN"]

MULTI_CONF = True

esp-powermeter_ns = cg.esphome_ns.namespace("esp-powermeter")
EspPowermeterComponent = powermeter_ns.class_("EspPowermeterComponent", uart.UARTDevice, cg.Component)


CONF_POWERMETER_ID = "powermeter_id"

POWERMETER_COMPONENT_SCHEMA = cv.Schema(
    {
        cv.GenerateID(CONF_POWERMETER_ID): cv.use_id(EspPowermeterComponent),
    }
)

CONFIG_SCHEMA = uart.UART_DEVICE_SCHEMA.extend(
    {
        cv.GenerateID(): cv.declare_id(EspPowermeterComponent),
        cv.Optional(CONF_THROTTLE, default="1s"): cv.positive_time_period_milliseconds,
    }
)


def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    yield cg.register_component(var, config)
    yield uart.register_uart_device(var, config)

    cg.add(var.set_throttle(config[CONF_THROTTLE]))
