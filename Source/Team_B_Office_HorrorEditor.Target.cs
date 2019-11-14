// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Team_B_Office_HorrorEditorTarget : TargetRules
{
	public Team_B_Office_HorrorEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Team_B_Office_Horror" } );
	}
}
