SELECT distinct Students.Name, Notes.GRADE, Students.Value 
FROM Students, Notes
WHERE Students.Value BETWEEN Notes.MIN_VALUE AND Notes.MAX_VALUE
order by Students.Value DESC, Students.Name asc;


