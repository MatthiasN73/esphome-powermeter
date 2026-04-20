#pragma once

#include "esphome/core/component.h"
#include "esphome/components/binary_sensor/binary_sensor.h"
#include "esphome/components/sensor/sensor.h"
#include "esphome/components/text_sensor/text_sensor.h"
#include "esphome/components/uart/uart.h"

namespace esphome {
namespace esp-powermeter {

class EspPowermeterComponent : public uart::UARTDevice, public Component {
 public:
  void setup() override;
  void update() override;
  void dump_config() override;
};


}  // namespace esp-powermeter
}  // namespace esphome
