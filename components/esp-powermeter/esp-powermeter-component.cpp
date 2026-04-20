#include "esphome/core/log.h"
#include "esp-powermeter-component.h"

namespace esphome {
namespace esp-powermeter {

static const char *TAG = "empty_component.component";


void EspPowermeterComponent::setup() {
    ESP_LOGCONFIG(TAG, "Empty component setup");
}

void EspPowermeterComponent::update() {
    ESP_LOGCONFIG(TAG, "Empty component update");
}

void EspPowermeterComponent::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty component");
}


}  // namespace esp-powermeter
}  // namespace esphome
