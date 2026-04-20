#include "esphome/core/log.h"
#include "esp-powermeter-component.h"

namespace esphome {
namespace powermeter {

static const char *TAG = "empty_component.component";


void PowermeterComponent::setup() {
    ESP_LOGCONFIG(TAG, "Empty component setup");
}

void PowermeterComponent::update() {
    ESP_LOGCONFIG(TAG, "Empty component update");
}

void PowermeterComponent::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty component");
}


}  // namespace powermeter
}  // namespace esphome
