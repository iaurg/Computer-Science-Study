SELECT name
FROM people AS people
JOIN stars AS stars ON people.id = stars.person_id
WHERE stars.movie_id IN
(
SELECT stars.movie_id
FROM stars
INNER JOIN people ON stars.person_id = people.id
WHERE name = "Kevin Bacon"
AND birth = 1958
)
AND name != "Kevin Bacon";