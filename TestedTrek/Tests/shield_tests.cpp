#include "gtest/gtest.h"

#include "Shield.h"

TEST(ShieldTestCase, ShieldDefaultsToOff) {
	StarTrek::Shield testArticle;

	ASSERT_FALSE(testArticle.isShieldUp());
}

TEST(ShieldTestCase, ToggleShieldUp) {
	StarTrek::Shield testArticle;

	testArticle.toggleShield(true);
	ASSERT_TRUE(testArticle.isShieldUp());
}

TEST(ShieldTestCase, ToggleShieldDown) {
	StarTrek::Shield testArticle;

	testArticle.toggleShield(true);
	testArticle.toggleShield(false);

	ASSERT_FALSE(testArticle.isShieldUp());
}