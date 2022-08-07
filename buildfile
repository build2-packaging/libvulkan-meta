./: {*/ -build/} doc{README.md} legal{LICENSE.txt} manifest

# Don't install tests.
tests/: install = false
