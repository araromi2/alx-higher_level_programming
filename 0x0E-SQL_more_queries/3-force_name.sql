-- creates table force_name with some description
CREATE TABLE
	IF NOT EXISTS `force_name` (
		`id` INT,
		`name` VARCHAR(256) NOT NULL
	);
