-- creats hbtn_0d_usa database and states table with id and name description
CREATE DATABASE
	IF NOT EXISTS `hbtn_0d_usa`
CREATE TABLE
	IF NOT EXISTS `hbtn_0d_usa`.`states` (
		PRIMARY KEY(`id`),
		`id` INT NOT NULL AUTO_INCREMENT,
		`name` VARCHAR(256) NOT NULL
		);
