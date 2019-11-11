SELECT customers.name,rentals.rentals_date
FROM customers JOIN rentals on customers.id=rentals.id_customers 
WHERE rentals.rentals_date>='2016-09-01' and rentals.rentals_date<='2016-09-30';