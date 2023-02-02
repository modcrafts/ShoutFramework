#include "BurstWeapon.h"
#include "DamageComponent.h"

class UPrimitiveComponent;
class UHealthComponentBase;
class UFSDPhysicalMaterial;

void ABurstWeapon::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}


ABurstWeapon::ABurstWeapon() {
    this->Damage = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->BurstFireBonusDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("BurstFireDamageBonus"));
}

