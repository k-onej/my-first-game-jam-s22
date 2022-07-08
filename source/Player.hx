package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;

class Player extends FlxSprite
{
	static inline var SPEED:Float = 130;
	static inline var ACCEL:Float = 300;
	static inline var DECEL:Float = 200;
	static inline var JUMP_STRENGTH:Float = 150;

	var startX:Float;
	var startY:Float;

	public function new(x:Float = 0, y:Float = 0):Void
	{
		super(x, y);

		loadGraphic(AssetPaths.player__png, true, 16, 16);
		setFacingFlip(LEFT, false, false);
		setFacingFlip(RIGHT, true, false);
		animation.add("run", [1, 2], 6, false);
		animation.add("idle", [0], 6, false);

		drag.x = DECEL;
		acceleration.y = 200;
		maxVelocity.x = SPEED;
		maxVelocity.y = 200;
	}

	override function update(elapsed:Float):Void
	{
		updateMovement();

		super.update(elapsed);
	}

	function updateMovement():Void
	{
		// Helper variables to tell which keys were pressed
		var left:Bool = false;
		var right:Bool = false;
		var jump:Bool = false;

		left = FlxG.keys.anyPressed([LEFT, A]);
		right = FlxG.keys.anyPressed([RIGHT, D]);
		jump = FlxG.keys.anyJustPressed([UP, SPACE]);

		// Move player when movement keys are pressed
		acceleration.x = 0;
		if (left)
		{
			acceleration.x = -ACCEL;
			facing = LEFT;
		}
		else if (right)
		{
			acceleration.x = ACCEL;
			facing = RIGHT;
		}

		if (jump && isTouching(FlxObject.FLOOR))
		{
			velocity.y = -JUMP_STRENGTH;
		}

		// if the player is moving (velocity is not 0 for either axis), we need to change the animation to match their facing
		if (velocity.x != 0 || velocity.y != 0)
		{
			switch (facing)
			{
				case LEFT, RIGHT:
					animation.play("run");
				case _:
			}
		}
		else
		{
			animation.play("idle");
		}
	}
}
