#pragma once

#include "esphome/core/component.h"
#include "esphome/components/binary_sensor/binary_sensor.h"
#include "esphome/components/sensor/sensor.h"
#include "esphome/components/text_sensor/text_sensor.h"
#include "esphome/components/uart/uart.h"

namespace esphome {
namespace powermeter {

class PowermeterComponent : public uart::UARTDevice, public Component {
  public:
    void set_throttle(uint32_t throttle) { this->throttle_ = throttle; }

    void setup() override;
    void dump_config() override;
    void loop() override;

    float get_setup_priority() const override { return setup_priority::DATA; }
 
  private:
    uint32_t last_transmission_{0};
    uint32_t last_publish_{0};
    uint32_t throttle_{0};
};


}  // namespace powermeter
}  // namespace esphome
