object_building_player_atat_house = object_building_player_shared_atat_house:new {
	lotSize = 5,
	baseMaintenanceRate = 80,
	allowedZones = {"corellia", "dantooine", "lok", "naboo", "rori", "talus", "tatooine", "yavin4", "dathomir", "kaas", "endor"},
	publicStructure = 0,
	length = 4,
	width = 2,
	constructionMarker = "object/building/player/construction/construction_player_house_corellia_large_style_01.iff",
	skillMods = {
		{"private_medical_rating", 100},
		{"private_buff_mind", 125},
		{"private_med_battle_fatigue", 15},
		{"private_med_wound_mind", 15},
		{"private_safe_logout", 1},
		{"advanced_assembly", 20},
		{"armor_assembly", 20},
		{"general_assembly", 20},
		{"bio_engineer_assembly", 20},
		{"clothing_assembly", 20},
		{"combat_medicine_assembly", 20},
		{"droid_assembly", 20},
		{"engineering_assembly", 20},
		{"food_assembly", 20},
		{"force_assembly", 20},
		{"jedi_saber_assembly", 20},
		{"medicine_assembly", 20},
		{"structure_assembly", 20},
		{"weapon_assembly", 20},
		{"armor_experimentation", 5},
		{"general_experimentation", 5},
		{"bio_engineer_experimentation", 5},
		{"clothing_experimentation", 5},
		{"combat_medicine_experimentation", 5},
		{"creature_experimentation", 5},
		{"droid_experimentation", 5},
		{"food_experimentation", 5},
		{"force_experimentation", 5},
		{"jedi_saber_experimentation", 5},
		{"medicine_experimentation", 5},
		{"structure_experimentation", 5},
		{"tissue_experimentation", 5},
		{"weapon_experimentation", 5},
		{"armor_complexity", 50},
		{"clothing_complexity", 50},
		{"medicine_complexity", 50},
		{"droid_complexity", 50},
		{"food_complexity", 50},
		{"structure_complexity", 50},
		{"armor_customization", 50},
		{"artisan_clothing_customization", 50},
		{"clothing_customization", 50},
		{"droid_customization", 50},
		{"armor_repair", 20},
		{"clothing_repair", 20},
		{"force_repair_bonus", 20},
		{"crafting_repair", 20},
		{"weapon_repair", 20}
	},
	childObjects = {
			{templateFile = "object/tangible/terminal/terminal_player_structure.iff", x = 5.00735, z = 18.0688, y = 5.37879, ow = 0.707107, ox = 0, oz = 0, oy = -0.707107, cellid = 1, containmentType = -1},
			{templateFile = "object/tangible/sign/player/house_address.iff", x = -4.00, z = 6.40, y = 14.75, ow = 0.99939, ox = -0.0349, oz = 0, oy =0, cellid = -1, containmentType = -1}
	},
	shopSigns = {
			{templateFile = "object/tangible/sign/player/house_address.iff", x = -4.00, z = 6.40, y = 14.75, ow = 0.99939, ox = -0.0349, oz = 0, oy =0, cellid = -1, containmentType = -1, requiredSkill = "", suiItem = "@player_structure:house_address"},
			{templateFile = "object/tangible/sign/player/shop_sign_s01.iff", x = -7.00, z = 0.94, y = 15.57, ow = 1, ox = 0, oz = 0, oy = 0, cellid = -1, containmentType = -1, requiredSkill = "crafting_merchant_management_01", suiItem = "@player_structure:shop_sign1"},
			{templateFile = "object/tangible/sign/player/shop_sign_s02.iff", x = -7.00, z = 0.94, y = 15.57, ow = 1, ox = 0, oz = 0, oy = 0, cellid = -1, containmentType = -1, requiredSkill = "crafting_merchant_management_02", suiItem = "@player_structure:shop_sign2"},
			{templateFile = "object/tangible/sign/player/shop_sign_s03.iff", x = -7.00, z = 0.94, y = 15.57, ow = 1, ox = 0, oz = 0, oy = 0, cellid = -1, containmentType = -1, requiredSkill = "crafting_merchant_management_03", suiItem = "@player_structure:shop_sign3"},
			{templateFile = "object/tangible/sign/player/shop_sign_s04.iff", x = -7.00, z = 0.94, y = 15.57, ow = 1, ox = 0, oz = 0, oy = 0, cellid = -1, containmentType = -1, requiredSkill = "crafting_merchant_management_04", suiItem = "@player_structure:shop_sign4"}		
	}
}

ObjectTemplates:addTemplate(object_building_player_atat_house, "object/building/player/atat_house.iff")
