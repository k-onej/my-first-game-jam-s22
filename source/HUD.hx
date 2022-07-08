package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;

using flixel.util.FlxSpriteUtil;

class HUD extends FlxTypedGroup<FlxSprite>
{
	var background:FlxSprite;
	var healthCounter:FlxText;
	var manaCounter:FlxText;
	var healthIcon:FlxSprite;
	var manaIcon:FlxSprite;
	var healthBar:FlxTween;
	var manaBar:FlxTween;

	public function new()
	{
		super();

		background = new FlxSprite().makeGraphic(FlxG.width, 20, FlxColor.BLACK);
		background.drawRect(0, 19, FlxG.width, 1, FlxColor.WHITE);
		healthCounter = new FlxText(16, 2, 0, "100", 8);
		healthCounter.setBorderStyle(SHADOW, FlxColor.GRAY, 1, 1);
		manaCounter = new FlxText(0, 2, 0, "100", 8);
		manaCounter.setBorderStyle(SHADOW, FlxColor.GRAY, 1, 1);
	}
}
