package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.addons.editors.ogmo.FlxOgmo3Loader;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;

class PlayState extends FlxState
{
	var player:Player;
	var map:FlxOgmo3Loader;
	var walls:FlxTilemap;
	var manaPotions:FlxTypedGroup<ManaPotion>;
	var torturedSouls:FlxTypedGroup<TorturedSoul>;
	var demons:FlxTypedGroup<Demon>;

	override public function create():Void
	{
		map = new FlxOgmo3Loader(AssetPaths.map__ogmo, AssetPaths.stage_001__json);
		walls = map.loadTilemap(AssetPaths.tiles__png, "walls");
		walls.follow();
		walls.setTileProperties(1, ANY);
		add(walls);

		manaPotions = new FlxTypedGroup<ManaPotion>();
		add(manaPotions);

		torturedSouls = new FlxTypedGroup<TorturedSoul>();
		add(torturedSouls);

		demons = new FlxTypedGroup<Demon>();
		add(demons);

		player = new Player();
		map.loadEntities(placeEntities, "Entities");
		add(player);

		FlxG.camera.follow(player, PLATFORMER, 1);

		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

		FlxG.collide(player, walls);
		FlxG.collide(demons, walls);
		FlxG.collide(demons, demons);
		demons.forEachAlive(checkEnemyVision);
		FlxG.collide(torturedSouls, walls);
		FlxG.overlap(player, manaPotions, playerTouchManaPotion);
		playerFallDeath();
	}

	function placeEntities(entity:EntityData):Void
	{
		switch (entity.name)
		{
			case "player":
				player.setPosition(entity.x, entity.y);

			case "mana potion":
				manaPotions.add(new ManaPotion(entity.x, entity.y));

			case "tortured soul":
				torturedSouls.add(new TorturedSoul(entity.x, entity.y));

			case "demon":
				demons.add(new Demon(entity.x, entity.y));
		}
	}

	function playerTouchManaPotion(player:Player, manaPotion:ManaPotion)
	{
		if (player.alive && player.exists && manaPotion.alive && manaPotion.exists)
		{
			manaPotion.kill();
		}
	}

	function playerFallDeath()
	{
		if (player.y >= 480)
		{
			onPlayerDeath();
		}
	}

	public function onPlayerDeath()
	{
		player.kill();
		walls.kill();
		manaPotions.kill();
		create();
	}

	function checkEnemyVision(enemy:Demon)
	{
		if (walls.ray(enemy.getMidpoint(), player.getMidpoint()))
		{
			enemy.seesPlayer = true;
			enemy.playerPosition = player.getMidpoint();
		}
		else
		{
			enemy.seesPlayer = false;
		}
	}
}
