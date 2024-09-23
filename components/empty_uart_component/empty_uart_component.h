#pragma once

#include "esphome/core/component.h"
#include "esphome/components/uart/uart.h"

namespace esphome {
namespace empty_uart_component {
#include <esphome/core/types.h>

namespace esphome {

  class MyComponentEvent : public Event {
  public:
    // Optional properties or methods for the event
  };

}
class EmptyUARTComponent : public uart::UARTDevice, public Component {
  public:
    void setup() override;
    void loop() override;
    void dump_config() override;
};


}  // namespace empty_uart_component
}  // namespace esphome
