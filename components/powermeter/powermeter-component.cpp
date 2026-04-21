#include "esphome/core/log.h"
#include "powermeter-component.h"

namespace esphome {
namespace powermeter {

static const char *TAG = "empty_component.component";


void PowermeterComponent::setup() {
    ESP_LOGCONFIG(TAG, "Empty component setup");
}

void PowermeterComponent::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty component dump_config");
}


void PowermeterComponent::loop() {
}

}  // namespace powermeter
}  // namespace esphome
