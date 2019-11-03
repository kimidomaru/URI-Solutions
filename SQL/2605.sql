SELECT products.name, providers.name
FROM products JOIN categories on products.id_categories = categories.id
            JOIN providers on products.id_providers = providers.id
WHERE categories.id = 6;