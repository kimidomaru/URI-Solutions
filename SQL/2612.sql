SELECT movies.id,movies.name
FROM movies JOIN movies_actors on movies.id = movies_actors.id_movies
            JOIN actors on actors.id=movies_actors.id_actors
WHERE actors.name like '%Silva';