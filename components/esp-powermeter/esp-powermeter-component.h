#pragma once

#include "esphome/core/component.h"

namespace esphome {
namespace esp-powermeter {

class EspPowermeterComponent : public PollingComponent {
 public:
  EspPowermeterComponent() : PollingComponent(15000) {}
  void setup() override;
  void update() override;
  void dump_config() override;
};


}  // namespace esp-powermeter
}  // namespace esphome
