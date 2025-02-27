<?php

use App;

$factory->define(Rector\Laravel\Tests\Rector\Namespace_\FactoryDefinitionRector\Source\Model::class, function ($faker) {
    return [
        'name' => $faker->name,
        'email' => $faker->unique()->safeEmail,
    ];
});

?>
-----
<?php

use App;

class ModelFactory extends \Illuminate\Database\Eloquent\Factories\Factory
{
    protected $model = Rector\Laravel\Tests\Rector\Namespace_\FactoryDefinitionRector\Source\Model::class;
    public function definition()
    {
        return [
            'name' => $this->faker->name,
            'email' => $this->faker->unique()->safeEmail,
        ];
    }
}

?>
