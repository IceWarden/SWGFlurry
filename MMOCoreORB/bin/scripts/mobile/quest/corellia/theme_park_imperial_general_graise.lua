theme_park_imperial_general_graise = Creature:new {
	objectName = "@mob/creature_names:imperial_general",
	socialGroup = "imperial",
	faction = "imperial",
	level = 28,
	chanceHit = 0.37,
	damageMin = 270,
	damageMax = 280,
	baseXp = 2914,
	baseHAM = 8200,
	baseHAMmax = 10000,
	armor = 0,
	resists = {20,20,20,-1,30,-1,30,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK,
	optionsBitmask = AIENABLED,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_imperial_general_m.iff"},
	lootGroups = {
		{
			groups = {
				{group = "junk", chance = 6000000},
				{group = "tailor_components", chance = 2000000},
				{group = "loot_kit_parts", chance = 1000000},
				{group = "imperial_officer_common", chance = 1000000}
				
			}
		}
	},
	weapons = {"imperial_weapons_heavy"},
	conversationTemplate = "",
	attacks = merge(riflemanmaster,carbineermaster,brawlermaster,marksmanmaster)
}

CreatureTemplates:addCreatureTemplate(theme_park_imperial_general_graise, "theme_park_imperial_general_graise")
