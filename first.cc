#include "ns3/core-module.h"
#include "ns3/network-module.h"

using namespace ns3;
NS_LOG_COMPONENT_DEFINE ("welcome");
int main(int argc, char const *argv[]) {
  NS_LOG_UNCOND("welcome");
  Simulator::Run();
  Simulator::Destroy();
  return 0;
}
