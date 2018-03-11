#include <physx/simulation.h>


namespace PhysX
{
    Simulation::Simulation()
    {
        std::cerr << "Simulation created\n";
    }

    Simulation::~Simulation()
    {
        std::cerr << "Simulation destroyed\n";
    }
}
