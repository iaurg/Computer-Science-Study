SELECT title
FROM movies AS movies
JOIN ratings AS ratings ON ratings.movie_id = movies.id
JOIN stars AS stars ON stars.movie_id = movies.id
JOIN people AS people ON people.id = stars.person_id
WHERE people.name = "Chadwick Boseman"
ORDER BY ratings.rating DESC
LIMIT 5;