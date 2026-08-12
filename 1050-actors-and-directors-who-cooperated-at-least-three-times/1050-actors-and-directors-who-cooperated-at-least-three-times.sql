# Write your MySQL query statement below
SELECT actor_id,director_id
FROM ActorDirector
GROUP By actor_id, director_id
HAVING count(*) >= 3;