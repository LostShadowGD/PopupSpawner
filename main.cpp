#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <Geode/ui/FLAlertLayer.hpp>

using namespace geode::prelude;

class $modify(CCScene) {
    bool keyDown(cocos2d::enumKeyCodes key) {
        // Check if the "=" key is pressed
        if (key == cocos2d::KEY_EQUALS) {
            // Create and show an FLAlertLayer
            FLAlertLayer::create(
                  "Title",    // title
                  "Hi mom!",  // content
                  "OK"        // button
            )->show();
            return true; // return true to stop further processing if needed
        }

        // Otherwise, call the original keyDown function
        return PlayLayer::keyDown(key);
    }
};
