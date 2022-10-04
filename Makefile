# ROMs
Target_ROM := Teleshack-III.gba
Source_ROM := FE8_clean.gba

# Directories
Tools := $(realpath .)/Tools

# EA
EA := $(Tools)/EventAssembler
Core := $(EA)/ColorzCore
EA_Input := Main.event

# make hack
hack: $(Target_ROM)

$(Target_ROM): $(EA_Input)
	@echo Building $(Target_ROM)...
	@cp $(Source_ROM) $(Target_ROM)
	@$(Core) A FE8 -output:$(Target_ROM) -input:$(EA_Input) --nocash-sym --build-times
