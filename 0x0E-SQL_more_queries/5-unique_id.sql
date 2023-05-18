-- creates unique_id table with a unique and default id attribute
CREATE TABLE
	IF NOT EXISTS `unique_id` (
		`id` INT DEFAULT 1 UNIQUE,
		`name` VARCHAR(256)
	);
