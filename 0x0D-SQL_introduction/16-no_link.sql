-- lists all records of the table second_table of the database hbtn_0c_0
-- don't list rows without a name value
-- The database name will be passed as an argument of the mysql command
SELECT score, name
FROM second_table
WHERE name IS NOT NULL
ORDER BY score DESC;
