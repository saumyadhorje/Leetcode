# Write your MySQL query statement below
Select DISTINCT  author_id  as id
FROM Views 
Where author_id=viewer_id
Order by author_id ASC;

