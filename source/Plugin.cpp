// ElektriskSalmesykkel — a thin product wrapper. All behaviour lives in the shared
// engine (dm::ManifestPluginProcessor); this only supplies the embedded asset bundle.

#include <ManifestPluginProcessor.h>

#if ELEKTRISKSALMESYKKEL_HAS_ASSETS
 #include <BinaryData.h>
#endif

juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    dm::ManifestPluginProcessor::Assets assets;
    assets.name = JucePlugin_Name;

   #if ELEKTRISKSALMESYKKEL_HAS_ASSETS
    assets.manifestJson     = BinaryData::manifest_json;
    assets.manifestJsonSize = BinaryData::manifest_jsonSize;
    assets.findResource = [] (const juce::String& filename, int& sizeOut) -> const char*
    {
        for (int i = 0; i < BinaryData::namedResourceListSize; ++i)
            if (filename == BinaryData::originalFilenames[i])
                return BinaryData::getNamedResource (BinaryData::namedResourceList[i], sizeOut);
        return nullptr;
    };
   #endif

    return new dm::ManifestPluginProcessor (std::move (assets));
}
