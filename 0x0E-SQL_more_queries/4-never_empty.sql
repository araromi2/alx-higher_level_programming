-- Creates id_not_null table with id and name description
CREATE TABLE
	IF NOT EXISTS `id_not_null` (
		`id` INT DEFAULT 1,
		`name` VARCHAR(256)
	);
