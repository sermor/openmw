#ifndef OPENMW_ESM_NPCSTATE_H
#define OPENMW_ESM_NPCSTATE_H

#include "objectstate.hpp"
#include "inventorystate.hpp"

namespace ESM
{
    // format 0, saved games only

    struct NpcState : public ObjectState
    {
        InventoryState mInventory;

        virtual void load (ESMReader &esm);
        virtual void save (ESMWriter &esm, bool inInventory = false) const;
    };
}

#endif
