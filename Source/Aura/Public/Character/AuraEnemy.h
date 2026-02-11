

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyMyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyMyInterface
{
	GENERATED_BODY()
	
public:
	AAuraEnemy();
	
	//** Enemy Interface */
	virtual void HighlightActor() override;
	virtual void UnHighLightActor() override;
	//** end Enemy Interface */
	
protected::
	virtual void BeginPlay() override;
};
