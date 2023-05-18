-- lists all cities of California that can be found in the hbtn_0d_usa db
SELECT `id`, `name`
FROM `cities`
WHERE `state_id` IN
	(SELECT `id`
		FROM `states`
		WHERE `name` = "California")
ORDER BY `id`;
