
MAKEFLAGS += --no-print-directory

TOOLDIRS := $(filter-out tools/agbcc tools/binutils tools/poryscript tools/floating,$(wildcard tools/*))

.PHONY: all $(TOOLDIRS)

all: $(TOOLDIRS)

$(TOOLDIRS):
	@$(MAKE) -C $@
