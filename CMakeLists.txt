# elektrisk-salmesykkel-plugin — distributable product (VST3 / AU / Standalone).
#
# A thin wrapper over dehli-musikk-sampler-engine: this file states ONLY the product
# identity. Everything else (entry point, asset embed, sample-pack install, custom
# standalone, packaging metadata) comes from dmse_add_plugin — see
# dehli-musikk-sampler-engine/cmake/DmsePlugin.cmake.

dmse_add_plugin(ElektriskSalmesykkel
    PRODUCT_NAME "ElektriskSalmesykkel"
    PLUGIN_CODE  Elsk
    VERSION      0.1.0
)
