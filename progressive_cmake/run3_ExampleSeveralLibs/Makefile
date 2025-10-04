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

#################################################################

REPORT_DIR := coverage
COVERAGE_XML := $(REPORT_DIR)/coverage.xml
COVERAGE_HTML := $(REPORT_DIR)/coverage.html

.PHONY: coverage-report
coverage-report:
	mkdir -p "$(REPORT_DIR)"
	gcovr -r .-f src --html --html-details -o "$(COVERAGE_HTML)"
	gcovr -r . -f src --xml-pretty -o "$(COVERAGE_XML)"
	@echo "Coverage report generated:"
	@echo "  HTML: $(COVERAGE_HTML)"
	@echo "  XML:  $(COVERAGE_XML)"

#################################################################
.PHONY: clean
clean:
	rm -rf "$(UNIT_TESTS_BUILD_DIR)"
	rm -rf "$(REPORT_DIR)"
