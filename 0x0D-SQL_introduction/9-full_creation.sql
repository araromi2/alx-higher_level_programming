-- creates a second_table in the database htbn_0c_0
-- The database name will be passed as an argument of the mysql command
CREATE TABLE IF NOT EXISTS second_table (
id INT,
name VARCHAR(256),
score INT);
INSERT INTO second_table
VALUES (1, "John", 10);
INSERT INTO second_table
VALUES (2, "Alex", 3);
INSERT INTO second_table
VALUES (3, "Bob", 14);
INSERT INTO second_table
VALUES (4, "George", 8);
