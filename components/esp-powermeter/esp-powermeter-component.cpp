#include "esphome/core/log.h"
#include "esp-powermeter-component.h"

namespace esphome {
namespace esp-powermeter {

static const char *TAG = "empty_component.component";

void EspPowermeterComponent::setup() {

}

void EspPowermeterComponent::loop() {

}

void EspPowermeterComponent::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty component");
}


}  // namespace esp-powermeter
}  // namespace esphome
