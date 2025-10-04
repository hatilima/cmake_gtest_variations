NB_CPUs := $(shell nproc)

#################################################################
.PHONY: help
help:
	@echo "Makefile commands:"
	@echo "  make unit-tests        - Build and run unit tests"
	@echo "  make build-unit-tests  - Build unit tests"
	@echo "  make run-unit-tests    - Run unit tests"
	@echo "  make clean             - Clean build artifacts"

#################################################################

UNIT_TESTS_BUILD_DIR = build
UNIT_TESTS_BIN_DIR = $(UNIT_TESTS_BUILD_DIR)/test

.PHONY: unit-tests
unit-tests: build-unit-tests run-unit-tests

.PHONY: build-unit-tests
build-unit-tests:
	mkdir -p "$(UNIT_TESTS_BUILD_DIR)"
	cmake . -B "$(UNIT_TESTS_BUILD_DIR)"
	make -j$(NB_CPUs) -C "$(UNIT_TESTS_BUILD_DIR)"

.PHONY: run-unit-tests
run-unit-tests:
	make test -C "$(UNIT_TESTS_BUILD_DIR)" CTEST_OUTPUT_ON_FAILURE=1

.PHONY: clean
clean:
	rm -rf "$(UNIT_TESTS_BUILD_DIR)"

#################################################################