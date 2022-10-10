# ROMs
Target_ROM := $(realpath .)/Teleshack-III.gba
Target_Sym := $(realpath .)/Teleshack-III.sym
Source_ROM := $(realpath .)/FE8_clean.gba

# Directories
Tools := $(realpath .)/Tools

# EA
EA := $(Tools)/EventAssembler
Core := $(EA)/ColorzCore
EA_Input := $(realpath .)/Main.event

# Python
PyTools := $(Tools)/Python

# SymCombo
SymCombo := $(PyTools)/SymCombo/SymCombo.py
MultiSym := $(PyTools)/SymCombo/MultiSym.txt

# make hack
hack: $(Target_ROM)

$(Target_ROM): $(EA_Input)
	@echo Building $(Target_ROM)...
	@cp $(Source_ROM) $(Target_ROM)
	@$(Core) A FE8 -output:$(Target_ROM) -input:$(EA_Input) --nocash-sym --build-times
	@python3 $(SymCombo) --input $(MultiSym) --output $(Target_Sym)