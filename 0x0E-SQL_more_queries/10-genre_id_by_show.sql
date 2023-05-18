-- read from an external database and list all shows with at
-- at least one genre lked
SELECT s.`title`, g.`genre_id`
FROM `tv_shows` AS s
INNER JOIN `tv_show_genres` AS g
ON s.`id` = g.`show_id`
ORDER BY s.`title`, g.`genre_id`;
