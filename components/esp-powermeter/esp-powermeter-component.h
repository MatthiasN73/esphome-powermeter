#pragma once

#include "esphome/core/component.h"

namespace esphome {
namespace esp-powermeter {

class EspPowermeterComponent : public Component {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
};


}  // namespace esp-powermeter
}  // namespace esphome
